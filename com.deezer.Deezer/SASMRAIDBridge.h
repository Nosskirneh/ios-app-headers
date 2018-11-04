//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASMRAIDBridge : NSObject
{
}

- (_Bool)checkValidNumberArgument:(id)arg1 inDictionary:(id)arg2;
- (_Bool)checkValidClosePosition:(id)arg1 inDictionary:(id)arg2;
- (_Bool)checkValidOrientation:(id)arg1 inDictionary:(id)arg2;
- (_Bool)checkValidJavascriptBoolean:(id)arg1 inDictionary:(id)arg2;
- (_Bool)checkStringArgument:(id)arg1 inDictionary:(id)arg2;
- (_Bool)checkSendMessageArguments:(id)arg1;
- (_Bool)checkCallPixelArguments:(id)arg1;
- (_Bool)checkSetShakeUpdateArguments:(id)arg1;
- (_Bool)checkSetTiltUpdateArguments:(id)arg1;
- (_Bool)checkSetHeadingUpdateArguments:(id)arg1;
- (_Bool)checkSetGPSUpdateArguments:(id)arg1;
- (_Bool)checkSetOrientationPropertiesArguments:(id)arg1;
- (_Bool)checkSetResizePropertiesArguments:(id)arg1;
- (_Bool)checkUseCustomCloseArguments:(id)arg1;
- (_Bool)checkSetExpandPropertiesArguments:(id)arg1;
- (_Bool)checkResizeArguments:(id)arg1;
- (_Bool)checkExpandArguments:(id)arg1;
- (_Bool)checkOpenArguments:(id)arg1;
- (_Bool)checkVideoArguments:(id)arg1;
- (id)mraidReceiveScreenCaptureEvent:(id)arg1;
- (id)sendMessageJavascriptEvent:(id)arg1;
- (id)mraidUpdateShakePropertiesJavascriptEventWithIntensity:(double)arg1 interval:(double)arg2;
- (id)mraidShakeJavascriptEvent;
- (id)mraidLocationChangeJavascriptEventWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;
- (id)mraidHeadingChangeJavascriptEvent:(double)arg1;
- (id)mraidTiltChangeJavascriptEventWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)mraidOrientationChangeFromDeviceOrientationJavascriptEvent:(long long)arg1;
- (id)mraidOrientationChangeJavascriptEvent:(long long)arg1;
- (id)mraidErrorJavascriptEventWithAction:(id)arg1 message:(id)arg2;
- (id)mraidResizePropertiesChangeJavascriptEventWithWidth:(double)arg1 height:(double)arg2 customClosePosition:(long long)arg3 offsetX:(double)arg4 offsetY:(double)arg5 allowOffscreen:(_Bool)arg6;
- (id)mraidExpandPropertiesChangeJavascriptEventWithWidth:(double)arg1 height:(double)arg2 useCustomClose:(_Bool)arg3 isModal:(_Bool)arg4;
- (id)mraidDefaultPositionChangeJavascriptEventWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (id)javascriptStringWithFloat:(double)arg1 andFloat:(double)arg2 inJavascriptFunction:(id)arg3;
- (id)mraidScreenSizeChangeJavascriptEventWidthWidth:(double)arg1 height:(double)arg2;
- (id)mraidScaleJavascriptEvent:(double)arg1;
- (id)mraidMaxSizeChangeJavascriptEventWithWidth:(double)arg1 height:(double)arg2;
- (id)mraidPositionChangeJavascriptEventWithX:(double)arg1 y:(double)arg2;
- (id)mraidSizeChangeJavascriptEventWithWidth:(double)arg1 height:(double)arg2;
- (id)mraidViewableJavascriptEvent:(_Bool)arg1;
- (id)mraidPlacementTypeJavascriptEvent:(long long)arg1;
- (id)mraidReadyJavascriptEvent;
- (id)mraidStateChangeJavascriptEvent:(long long)arg1;
- (id)videoWasClickedJavascript;
- (id)videoIsReadyToDisplayJavascript;
- (id)activateMRAIDOnScript:(id)arg1;
- (_Bool)MRAIDActivatedInScript:(id)arg1;
- (_Bool)initializeError:(id *)arg1 withCode:(long long)arg2 description:(id)arg3;
- (_Bool)processEventWithPreviousURL:(id)arg1 error:(id *)arg2;
- (_Bool)fireNotificationWithName:(id)arg1 key:(id)arg2 arguments:(id)arg3 checkBlock:(CDUnknownBlockType)arg4;
- (id)createDefaultNotificationInfos;
- (_Bool)processEventWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)processEvent:(id)arg1 error:(id *)arg2;
- (_Bool)URLSchemeIsSAS:(id)arg1;

@end

