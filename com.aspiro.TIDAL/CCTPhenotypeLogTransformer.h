//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLogTransformer-Protocol.h"

@class NSString, PHTPhenotype;

@interface CCTPhenotypeLogTransformer : NSObject <CCTClearcutLogTransformer>
{
    PHTPhenotype *_phenotype;
}

@property(readonly, nonatomic) PHTPhenotype *phenotype; // @synthesize phenotype=_phenotype;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithPhenotype:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

