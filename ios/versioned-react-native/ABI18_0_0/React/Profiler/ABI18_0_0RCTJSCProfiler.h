/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <JavaScriptCore/JavaScriptCore.h>

#import <ReactABI18_0_0/ABI18_0_0RCTDefines.h>

/** The API is not thread-safe. */

/** The context is not retained. */
ABI18_0_0RCT_EXTERN void ABI18_0_0RCTJSCProfilerStart(JSContextRef ctx);
/** Returns a file path containing the profiler data. */
ABI18_0_0RCT_EXTERN NSString *ABI18_0_0RCTJSCProfilerStop(JSContextRef ctx);

ABI18_0_0RCT_EXTERN BOOL ABI18_0_0RCTJSCProfilerIsProfiling(JSContextRef ctx);
ABI18_0_0RCT_EXTERN BOOL ABI18_0_0RCTJSCProfilerIsSupported(void);
