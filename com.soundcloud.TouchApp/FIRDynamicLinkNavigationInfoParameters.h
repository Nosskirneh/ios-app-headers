//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FDLDictionaryRepresenting-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface FIRDynamicLinkNavigationInfoParameters : NSObject <FDLDictionaryRepresenting>
{
    NSMutableDictionary *_dictionary;
}

+ (id)parameters;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic, getter=isForcedRedirectEnabled) _Bool forcedRedirectEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

