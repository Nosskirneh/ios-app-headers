//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTMMusicAppMetadataObserverProtocol-Protocol.h"

@class GIMMe, NSString, YTMAlertView, YTMMusicAppMetadata, YTMSettings, YTUserDefaults;
@protocol YTResponder;

@interface YTMHintController : NSObject <GOOAlertViewDelegate, YTMMusicAppMetadataObserverProtocol>
{
    YTUserDefaults *_userDefaults;
    YTMMusicAppMetadata *_musicAppMetadata;
    YTMSettings *_settings;
    YTMAlertView *_alertView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)createNewAlertView;
- (void)didPressPrivacySettingButton;
- (void)didPressEnableAutoOffline;
- (void)didPressDismissButton;
- (void)showLikeHint;
- (void)showAutoOfflineHint;
- (void)musicAppMetadataDidChange:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1;
- (void)showHintWithType:(long long)arg1;
- (id)initWithMusicAppMetadata:(id)arg1 userDefaults:(id)arg2 settings:(id)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

