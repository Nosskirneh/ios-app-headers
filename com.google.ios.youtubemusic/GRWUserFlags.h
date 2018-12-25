//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSSet, NSString;

@interface GRWUserFlags : NSObject <NSSecureCoding>
{
    NSString *_userID;
    NSArray *_defaultFlags;
    NSArray *_experiments;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) NSArray *defaultFlags; // @synthesize defaultFlags=_defaultFlags;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSSet *flagNames;
@property(readonly, nonatomic) NSArray *validExperimentIDs;
- (id)flagsForElementName:(id)arg1;
- (id)initWithUserID:(id)arg1 experiments:(id)arg2 defaultFlags:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

