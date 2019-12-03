//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventFactoryModelMapping-Protocol.h"

@class NSArray, NSString;

@interface SPTNowPlayingViewDefaultModelMapping : NSObject <SPTEventFactoryModelMapping>
{
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_pageReason;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSArray *_components;
}

@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(copy, nonatomic) NSString *pageReason; // @synthesize pageReason=_pageReason;
@property(copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)eventComponentsWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)initWithApplicationId:(id)arg1 specificationId:(id)arg2 pageReason:(id)arg3 specificationCommitHash:(id)arg4 generatorCommitHash:(id)arg5 components:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

