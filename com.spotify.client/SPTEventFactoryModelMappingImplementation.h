//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventFactoryModelMapping-Protocol.h"

@class NSArray, NSString;

@interface SPTEventFactoryModelMappingImplementation : NSObject <SPTEventFactoryModelMapping>
{
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSArray *_nameComponents;
    NSArray *_identifierComponents;
    NSArray *_positionComponents;
    NSArray *_uriComponents;
    NSArray *_reasonComponents;
}

@property(readonly, copy, nonatomic) NSArray *reasonComponents; // @synthesize reasonComponents=_reasonComponents;
@property(readonly, copy, nonatomic) NSArray *uriComponents; // @synthesize uriComponents=_uriComponents;
@property(readonly, copy, nonatomic) NSArray *positionComponents; // @synthesize positionComponents=_positionComponents;
@property(readonly, copy, nonatomic) NSArray *identifierComponents; // @synthesize identifierComponents=_identifierComponents;
@property(readonly, copy, nonatomic) NSArray *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)eventComponentsWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)initWithModelMapping:(id)arg1;
- (id)initWithApplicationId:(id)arg1 specificationId:(id)arg2 specificationCommitHash:(id)arg3 generatorCommitHash:(id)arg4 nameComponents:(id)arg5 identifierComponents:(id)arg6 positionComponents:(id)arg7 uriComponents:(id)arg8 reasonComponents:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
