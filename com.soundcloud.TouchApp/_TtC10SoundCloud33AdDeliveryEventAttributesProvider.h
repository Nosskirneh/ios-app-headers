//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC10SoundCloud33AdDeliveryEventAttributesProvider : NSObject
{
    // Error parsing type: , name: eventName
    // Error parsing type: , name: eventVersion
    // Error parsing type: , name: version
    // Error parsing type: , name: playerStateObserver
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)attributesWithAdDelivered:(id)arg1 monetizedObject:(id)arg2 associatedRequestId:(id)arg3;
- (id)initWithVersion:(id)arg1 playerStateObserver:(id)arg2;
@property(nonatomic) long long eventVersion; // @synthesize eventVersion;
@property(nonatomic, copy) NSString *eventName; // @synthesize eventName;

@end

