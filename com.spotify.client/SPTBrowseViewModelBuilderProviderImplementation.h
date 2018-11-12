//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTBrowseViewModelBuilderProvider-Protocol.h"

@class NSString;
@protocol SPTHugsFactory;

@interface SPTBrowseViewModelBuilderProviderImplementation : NSObject <SPTBrowseViewModelBuilderProvider>
{
    id <SPTHugsFactory> _hugsFactory;
}

@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
- (void).cxx_destruct;
- (id)makeViewModelBuilderFactory;
- (id)makeComponentDefaults;
- (id)makeViewModelBuilder;
- (id)initWithHugsFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
