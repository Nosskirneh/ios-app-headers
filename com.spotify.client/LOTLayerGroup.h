//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface LOTLayerGroup : NSObject
{
    NSDictionary *_modelMap;
    NSDictionary *_referenceIDMap;
    NSArray *_layers;
}

@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)layerForReferenceID:(id)arg1;
- (id)layerModelForID:(id)arg1;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (id)initWithLayerJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;

@end

