//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7Anghami23ANGRemoteControlManager : NSObject
{
    // Error parsing type: , name: devicesArray
    // Error parsing type: , name: currentSOD
    // Error parsing type: , name: pendingManualSetOfSOD
    // Error parsing type: , name: shownDialog
    // Error parsing type: , name: lastShownDialogTimestamp
    // Error parsing type: , name: didShowDialogThisSession
}

+ (void)showDialogIfNeeded;
+ (id)currentSOD;
+ (_Bool)shouldRespondToRemoteControlFromUDID:(id)arg1;
+ (void)makeDeviceSODWithDevice:(id)arg1;
+ (_Bool)isCurrentDeviceStrictlySOD;
+ (_Bool)isCurrentDeviceSOD;
+ (_Bool)isCurrentDeviceRemote;
+ (id)getDeviceWithUdid:(id)arg1;
+ (void)makeThisDeviceSOD;
+ (void)updateDeviceProgressWithDevice:(id)arg1 songID:(id)arg2 buffering:(_Bool)arg3 progress:(double)arg4;
+ (id)activeDevices;
+ (_Bool)hasMultipleDevices;
- (CDUnknownBlockType).cxx_destruct;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)dealloc;
- (id)init;

@end
