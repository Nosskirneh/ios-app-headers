//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMJSONModel.h"

@class IMAdsConfigPreloadModel;

@interface IMAdsConfig_Preload : IMJSONModel
{
    IMAdsConfigPreloadModel *_base;
    IMAdsConfigPreloadModel *_interstitial;
    IMAdsConfigPreloadModel *_native;
}

+ (id)keyMapper;
@property(retain, nonatomic) IMAdsConfigPreloadModel *native; // @synthesize native=_native;
@property(retain, nonatomic) IMAdsConfigPreloadModel *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) IMAdsConfigPreloadModel *base; // @synthesize base=_base;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end

