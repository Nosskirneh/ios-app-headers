//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BranchLinkProperties, BranchUniversalObject;

@interface BranchLink : NSObject
{
    BranchUniversalObject *_universalObject;
    BranchLinkProperties *_linkProperties;
}

+ (id)linkWithUniversalObject:(id)arg1 properties:(id)arg2;
@property(retain, nonatomic) BranchLinkProperties *linkProperties; // @synthesize linkProperties=_linkProperties;
@property(retain, nonatomic) BranchUniversalObject *universalObject; // @synthesize universalObject=_universalObject;
- (void).cxx_destruct;

@end

