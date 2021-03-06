//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OSNotificationPayload;

@interface OSNotification : NSObject
{
    _Bool _shown;
    _Bool _isAppInFocus;
    _Bool _silentNotification;
    _Bool _mutableContent;
    OSNotificationPayload *_payload;
    unsigned long long _displayType;
}

@property(readonly, getter=hasMutableContent) _Bool mutableContent; // @synthesize mutableContent=_mutableContent;
@property(readonly) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, getter=isSilentNotification) _Bool silentNotification; // @synthesize silentNotification=_silentNotification;
@property(readonly, getter=wasAppInFocus) _Bool isAppInFocus; // @synthesize isAppInFocus=_isAppInFocus;
@property(readonly, getter=wasShown) _Bool shown; // @synthesize shown=_shown;
@property(readonly) OSNotificationPayload *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)stringify;
- (id)initWithPayload:(id)arg1 displayType:(unsigned long long)arg2;

@end

