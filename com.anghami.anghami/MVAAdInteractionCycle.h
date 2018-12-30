//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface MVAAdInteractionCycle : NSObject <NSSecureCoding>
{
    NSNumber *_aicID;
    NSNumber *_sessionID;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSNumber *aicID; // @synthesize aicID=_aicID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithSessionID:(id)arg1 aicID:(id)arg2;

@end
