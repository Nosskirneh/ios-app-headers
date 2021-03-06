//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMNotificationClickAction, GPMNotificationDateTimeWindow, GTLRSJ_NotificationGetnotificationResponse, NSString;

@interface GPMNotificationDetails : NSObject
{
    GTLRSJ_NotificationGetnotificationResponse *_sjNotificationResponse;
    _Bool _isAvailable;
    long long _type;
    long long _unavailableReason;
    NSString *_notificationID;
    NSString *_pCampaignID;
    NSString *_title;
    NSString *_bodyText;
    GPMNotificationClickAction *_clickAction;
    GPMNotificationDateTimeWindow *_dateTimeWindow;
}

@property(retain, nonatomic) GPMNotificationDateTimeWindow *dateTimeWindow; // @synthesize dateTimeWindow=_dateTimeWindow;
@property(retain, nonatomic) GPMNotificationClickAction *clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pCampaignID; // @synthesize pCampaignID=_pCampaignID;
@property(retain, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic) long long unavailableReason; // @synthesize unavailableReason=_unavailableReason;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)handleInvalidProperty:(id)arg1 inSJNotificationResponse:(id)arg2;
- (id)randomDateBetween:(id)arg1 endDate:(id)arg2 isTimeSensitive:(_Bool)arg3 timeSensitiveDisplayTime:(double)arg4;
- (id)getNextNotificationFireDate:(_Bool)arg1 timeSensitiveDisplayTime:(double)arg2;
- (struct NSDictionary *)toJSON;
- (_Bool)populateFromSJNotificationResponse:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSJNotificationResponse:(id)arg1;

@end

