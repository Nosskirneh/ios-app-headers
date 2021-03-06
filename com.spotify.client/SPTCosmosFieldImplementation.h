//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, Protocol;

@interface SPTCosmosFieldImplementation : NSObject
{
    Protocol *_protocol;
    NSDictionary *_policyDictionary;
    CDUnknownBlockType _populateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType populateBlock; // @synthesize populateBlock=_populateBlock;
@property(retain, nonatomic) NSDictionary *policyDictionary; // @synthesize policyDictionary=_policyDictionary;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)arg1 policyDictionary:(id)arg2 populateBlock:(CDUnknownBlockType)arg3;
- (id)initWithPolicyDictionary:(id)arg1 populateBlock:(CDUnknownBlockType)arg2;

@end

