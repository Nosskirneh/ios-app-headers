//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTIAPSpotifyProductRequest.h"

@class SPTHermesController;

@interface SPTIAPSpotifyHermesProductRequest : SPTIAPSpotifyProductRequest
{
    SPTHermesController *_hermesController;
}

@property(retain, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
- (void).cxx_destruct;
- (void)didComplete;
- (void)start;
- (id)initWithHermesController:(id)arg1;

@end

