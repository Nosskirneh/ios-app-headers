//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNotificationTypeDeserializer;

@interface SPTNotificationGroupDeserializer : NSObject
{
    SPTNotificationTypeDeserializer *_notificationTypeDeserializer;
}

@property(retain, nonatomic) SPTNotificationTypeDeserializer *notificationTypeDeserializer; // @synthesize notificationTypeDeserializer=_notificationTypeDeserializer;
- (void).cxx_destruct;
- (id)deserialize:(id)arg1;
- (id)initWithNotificationTypeDeserializer:(id)arg1;

@end

