//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface TV4ModelsWithAlphaKeys : NSObject
{
    NSArray *_keys;
    NSDictionary *_modelsByKeys;
    NSArray *_allModels;
}

@property(readonly, nonatomic) NSArray *allModels; // @synthesize allModels=_allModels;
@property(readonly, nonatomic) NSDictionary *modelsByKeys; // @synthesize modelsByKeys=_modelsByKeys;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (id)initWithModels:(id)arg1;

@end

