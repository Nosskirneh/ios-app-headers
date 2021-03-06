//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMConfig.h"

#import "IMConfig-Protocol.h"

@class IMAdsConfigModel, NSString;

@interface IMAdsConfig : IMConfig <IMConfig>
{
    IMAdsConfigModel *_model;
}

@property(retain, nonatomic) IMAdsConfigModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)getType;
- (id)getPlacementCacheConfig:(id)arg1;
- (id)getWebviewConfigForType:(id)arg1;
- (id)trcConfigForType:(id)arg1;
- (_Bool)isTrcEnableForType:(id)arg1;
- (id)cacheConfigForType:(id)arg1;
- (id)toDictionary;
- (_Bool)updatefromDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

