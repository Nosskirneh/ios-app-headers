//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FDLDictionaryRepresenting-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface FIRDynamicLinkAndroidParameters : NSObject <FDLDictionaryRepresenting>
{
    NSMutableDictionary *_dictionary;
}

+ (id)parametersWithPackageName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) NSURL *fallbackURL;
@property(nonatomic) long long minimumVersion;
@property(readonly, copy, nonatomic) NSString *packageName;
- (id)initWithPackageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

