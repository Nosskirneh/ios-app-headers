//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTRemoteConfigurationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _exampleBoolean;
    long long _exampleInteger;
    NSString *_remoteconfigSystemTestPropertyEnum;
    NSString *_simpleMessage;
}

@property(readonly, nonatomic) NSString *simpleMessage; // @synthesize simpleMessage=_simpleMessage;
@property(readonly, nonatomic) NSString *remoteconfigSystemTestPropertyEnum; // @synthesize remoteconfigSystemTestPropertyEnum=_remoteconfigSystemTestPropertyEnum;
@property(readonly, nonatomic) long long exampleInteger; // @synthesize exampleInteger=_exampleInteger;
@property(readonly, nonatomic) _Bool exampleBoolean; // @synthesize exampleBoolean=_exampleBoolean;
- (void).cxx_destruct;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

