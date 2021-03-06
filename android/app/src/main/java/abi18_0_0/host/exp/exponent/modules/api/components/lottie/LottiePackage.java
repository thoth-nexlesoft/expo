package abi18_0_0.host.exp.exponent.modules.api.components.lottie;

import abi18_0_0.com.facebook.react.ReactPackage;
import abi18_0_0.com.facebook.react.bridge.JavaScriptModule;
import abi18_0_0.com.facebook.react.bridge.NativeModule;
import abi18_0_0.com.facebook.react.bridge.ReactApplicationContext;
import abi18_0_0.com.facebook.react.uimanager.ViewManager;

import java.util.Collections;
import java.util.List;

@SuppressWarnings("unused")
public class LottiePackage implements ReactPackage {
  @Override public List<NativeModule> createNativeModules(ReactApplicationContext reactContext) {
    return Collections.emptyList();
  }

  @Override public List<Class<? extends JavaScriptModule>> createJSModules() {
    return Collections.emptyList();
  }

  @SuppressWarnings("rawtypes") @Override
  public List<ViewManager> createViewManagers(ReactApplicationContext reactContext) {
    return Collections.<ViewManager>singletonList(new LottieAnimationViewManager());
  }
}
