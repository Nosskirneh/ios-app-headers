//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class DZRRemoteCommandsManager;

@interface DeezerApplication : UIApplication
{
    DZRRemoteCommandsManager *_remoteCommandsManager;
}

@property(retain, nonatomic) DZRRemoteCommandsManager *remoteCommandsManager; // @synthesize remoteCommandsManager=_remoteCommandsManager;
- (void).cxx_destruct;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)init;

@end

