//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface RHNotification : NSObject
{
    _Bool _isLandingPage;
    _Bool _isRemote;
    NSURL *_appboyDeeplink;
    long long _action;
    NSString *_contentId;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSString *_campaignId;
    NSString *_screenName;
    NSDictionary *_userInfo;
    NSDate *_contentLastModified;
}

+ (id)notificationWithUserInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isRemote; // @synthesize isRemote=_isRemote;
@property(readonly, nonatomic) NSDate *contentLastModified; // @synthesize contentLastModified=_contentLastModified;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool isLandingPage; // @synthesize isLandingPage=_isLandingPage;
@property(readonly, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(readonly, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(readonly, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSURL *appboyDeeplink; // @synthesize appboyDeeplink=_appboyDeeplink;
- (void).cxx_destruct;
- (void)parseAlertInfo:(id)arg1;
@property(readonly, nonatomic) NSString *actionLocalizedDescription;
@property(readonly, nonatomic) _Bool shouldPlay;
- (void)updateGenericParameters:(id)arg1;
- (_Bool)updateWithAlarmInfo:(id)arg1;
- (_Bool)updateWithAppboyDeeplink:(id)arg1;
- (void)updateWithUserInfo:(id)arg1;
- (long long)actionForString:(id)arg1;
- (id)initWithUserInfo:(id)arg1;

@end
