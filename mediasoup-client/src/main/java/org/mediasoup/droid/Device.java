package org.mediasoup.droid;

public class Device {

  private long mNativeDevice;
  private final PeerConnection.Options pcOptions;

  public Device(PeerConnection.Options options) {
    mNativeDevice = nativeNewDevice();
    pcOptions = options;
  }

  public void dispose() {
    checkDeviceExists();
    nativeFreeDevice(mNativeDevice);
    mNativeDevice = 0;
  }

  public void load(String routerRtpCapabilities) throws MediasoupException {
    checkDeviceExists();

    org.webrtc.PeerConnection.RTCConfiguration config =
            getRTCConfigurationFromPeerConnectionOptions();
    long factory = getFactoryFromPeerConnectionOptions();

    nativeLoad(mNativeDevice, routerRtpCapabilities, config, factory);
  }

  public boolean isLoaded() {
    checkDeviceExists();
    return nativeIsLoaded(mNativeDevice);
  }

  public String getRtpCapabilities() throws MediasoupException {
    checkDeviceExists();
    return nativeGetRtpCapabilities(mNativeDevice);
  }

  public boolean canProduce(String kind) throws MediasoupException {
    checkDeviceExists();
    return nativeCanProduce(mNativeDevice, kind);
  }

  public SendTransport createSendTransport(
      SendTransport.Listener listener,
      String id,
      String iceParameters,
      String iceCandidates,
      String dtlsParameters,
      String appData)
      throws MediasoupException {
    checkDeviceExists();

    org.webrtc.PeerConnection.RTCConfiguration config =
            getRTCConfigurationFromPeerConnectionOptions();
    long factory = getFactoryFromPeerConnectionOptions();

    return nativeCreateSendTransport(
        mNativeDevice,
        listener,
        id,
        iceParameters,
        iceCandidates,
        dtlsParameters,
        config,
        factory,
        appData);
  }

  public RecvTransport createRecvTransport(
      RecvTransport.Listener listener,
      String id,
      String iceParameters,
      String iceCandidates,
      String dtlsParameters,
      String appData)
      throws MediasoupException {
    checkDeviceExists();

    org.webrtc.PeerConnection.RTCConfiguration config =
            getRTCConfigurationFromPeerConnectionOptions();
    long factory = getFactoryFromPeerConnectionOptions();

    return nativeCreateRecvTransport(
        mNativeDevice,
        listener,
        id,
        iceParameters,
        iceCandidates,
        dtlsParameters,
        config,
        factory,
        appData);
  }

  private void checkDeviceExists() {
    if (mNativeDevice == 0) {
      throw new IllegalStateException("Device has been disposed.");
    }
  }

  private org.webrtc.PeerConnection.RTCConfiguration getRTCConfigurationFromPeerConnectionOptions() {
        return pcOptions != null ? pcOptions.mRTCConfig : null;
  }

  private long getFactoryFromPeerConnectionOptions() {
    if (pcOptions == null || pcOptions.mFactory == null) {
      return 0L;
    }
    return pcOptions.mFactory.getNativePeerConnectionFactory();
  }

  private static native long nativeNewDevice();

  private static native void nativeFreeDevice(long device);

  // may throws MediasoupException;
  private static native void nativeLoad(
          long device,
          String routerRtpCapabilities,
          org.webrtc.PeerConnection.RTCConfiguration configuration,
          long peerConnectionFactory
  );

  private static native boolean nativeIsLoaded(long device);

  // may throws MediasoupException;
  private static native String nativeGetRtpCapabilities(long device);

  // may throws MediasoupException;
  private static native boolean nativeCanProduce(long device, String kind);

  // may throws MediasoupException;
  private static native SendTransport nativeCreateSendTransport(
      long device,
      SendTransport.Listener listener,
      String id,
      String iceParameters,
      String iceCandidates,
      String dtlsParameters,
      org.webrtc.PeerConnection.RTCConfiguration configuration,
      long peerConnectionFactory,
      String appData);

  // may throws MediasoupException;
  private static native RecvTransport nativeCreateRecvTransport(
      long device,
      RecvTransport.Listener listener,
      String id,
      String iceParameters,
      String iceCandidates,
      String dtlsParameters,
      org.webrtc.PeerConnection.RTCConfiguration configuration,
      long peerConnectionFactory,
      String appData);
}
