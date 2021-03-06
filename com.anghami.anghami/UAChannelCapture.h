//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UAConfig, UAPreferenceDataStore, UAPush;

@interface UAChannelCapture : NSObject
{
    _Bool _enableChannelCapture;
    UAPush *_push;
    UAConfig *_config;
    UAPreferenceDataStore *_dataStore;
}

+ (id)channelCaptureWithConfig:(id)arg1 push:(id)arg2 dataStore:(id)arg3;
@property _Bool enableChannelCapture; // @synthesize enableChannelCapture=_enableChannelCapture;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UAPush *push; // @synthesize push=_push;
- (void).cxx_destruct;
- (id)generateToken;
- (void)showAlertWithUrl:(id)arg1;
- (void)checkClipboard;
- (void)didBecomeActive;
- (void)disable;
- (void)enable:(double)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 push:(id)arg2 dataStore:(id)arg3;

@end

