//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWExperimentsElementProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GRWExperimentsBlockElement : NSObject <GRWExperimentsElementProtocol>
{
    NSMutableDictionary *_blocksDict;
    CDUnknownBlockType _defaultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType defaultBlock; // @synthesize defaultBlock=_defaultBlock;
@property(retain, nonatomic) NSMutableDictionary *blocksDict; // @synthesize blocksDict=_blocksDict;
- (void).cxx_destruct;
- (void)removeAllExperimentBlock;
- (void)runBlock;
- (void)setExperimentBlock:(CDUnknownBlockType)arg1 forBlockId:(id)arg2;
- (id)initWithElementName:(id)arg1 defaultBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

