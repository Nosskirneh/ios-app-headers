//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Keychain, _TtC4Core9ApiConfig;

@interface StreamURLFormatter : NSObject
{
    _TtC4Core9ApiConfig *_apiConfig;
    Keychain *_keychain;
}

@property(readonly, nonatomic) Keychain *keychain; // @synthesize keychain=_keychain;
@property(readonly, nonatomic) _TtC4Core9ApiConfig *apiConfig; // @synthesize apiConfig=_apiConfig;
- (void).cxx_destruct;
- (id)getAccessToken;
- (id)defaultQueryItemsWithSecretToken:(id)arg1;
- (id)defaultQueryItems;
- (id)defaultQueryItemsCombinedWithItems:(id)arg1;
- (id)unsnippedURLFromStreamURL:(id)arg1 secretToken:(id)arg2;
- (id)snippetURLFromStreamURL:(id)arg1 secretToken:(id)arg2;
- (id)formattedHlsUrlWithTrackUrnString:(id)arg1 isSnipped:(_Bool)arg2 secretToken:(id)arg3;
- (id)secretTokenForItem:(id)arg1;
- (id)formattedURLForItem:(id)arg1;
- (id)formattedURLWithURL:(id)arg1;
- (id)initWithApiConfig:(id)arg1 keychain:(id)arg2;
- (id)initWithApiConfig:(id)arg1;
- (id)init;

@end
