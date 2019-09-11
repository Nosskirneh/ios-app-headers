//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL, SPTReminder;

@interface SPTReminderAction : SPAction
{
    SPTReminder *_reminder;
    NSString *_text;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) SPTReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithReminder:(id)arg1 text:(id)arg2 url:(id)arg3;

@end

