//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGRatePlaylistItem, NSDictionary;

@interface ANGRatePlaylistLoader : Loader
{
    NSDictionary *_params;
    ANGRatePlaylistItem *_rateItem;
}

@property(retain, nonatomic) ANGRatePlaylistItem *rateItem; // @synthesize rateItem=_rateItem;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithParams:(id)arg1 andRate:(id)arg2;

@end

