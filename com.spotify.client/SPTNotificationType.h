//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTNotificationType : NSObject
{
    _Bool _subscribedEmail;
    _Bool _subscribedPush;
    NSString *_identifier;
    NSString *_name;
    NSString *_theDescription;
}

+ (id)stringFromChannel:(long long)arg1;
@property(nonatomic, getter=isSubscribedToPush) _Bool subscribedPush; // @synthesize subscribedPush=_subscribedPush;
@property(nonatomic, getter=isSubscribedToEmail) _Bool subscribedEmail; // @synthesize subscribedEmail=_subscribedEmail;
@property(retain, nonatomic) NSString *theDescription; // @synthesize theDescription=_theDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateChannel:(long long)arg1 toValue:(_Bool)arg2;
- (id)initNotificationWithIdentifier:(id)arg1 name:(id)arg2 description:(id)arg3 subscribedToEmail:(_Bool)arg4 subscribedToPush:(_Bool)arg5;

@end

