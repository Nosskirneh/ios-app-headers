//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _TtC4WiMP10SonosGroup : NSObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: playerUuid
    // Error parsing type: , name: isCoordinator
    // Error parsing type: , name: name
    // Error parsing type: , name: maxAge
    // Error parsing type: , name: webSocketAddress
    // Error parsing type: , name: householdId
    // Error parsing type: , name: volatile
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)updateWithValues:(id)arg1;
- (id)init:(id)arg1;
@property(nonatomic, readonly) _Bool expired;
@property(nonatomic) _Bool volatile; // @synthesize volatile;
@property(nonatomic, copy) NSString *householdId; // @synthesize householdId;
@property(nonatomic, copy) NSString *webSocketAddress; // @synthesize webSocketAddress;
@property(nonatomic, copy) NSString *maxAge; // @synthesize maxAge;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic) _Bool isCoordinator; // @synthesize isCoordinator;
@property(nonatomic, copy) NSString *playerUuid; // @synthesize playerUuid;
@property(nonatomic, copy) NSString *id; // @synthesize id;

@end
