//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMSearchLogEvent.h"

@class GPMSearchEntitySuggestionMusicItem;

@interface GPMEntitySuggestionSearchLogEvent : GPMSearchLogEvent
{
    GPMSearchEntitySuggestionMusicItem *_entitySuggestion;
    unsigned long long _position;
    _Bool _isPlayback;
}

- (void).cxx_destruct;
- (id)musicClientEvent;
- (id)initWithSearchEntitySuggestion:(id)arg1 position:(long long)arg2 isPlayback:(_Bool)arg3;

@end

