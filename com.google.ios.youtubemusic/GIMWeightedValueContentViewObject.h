//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOWeightedValueContentViewObject.h"

#import "GIMContentViewObject-Protocol.h"

@class GIMMe, NSString;

@interface GIMWeightedValueContentViewObject : GOOWeightedValueContentViewObject <GIMContentViewObject>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

