//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDInstrumentClusterPlaylistItem : NSObject
{
    unsigned long long _index;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    unsigned long long _state;
}

+ (id)new;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)stringWithPlaylistItemState:(unsigned long long)arg1;
- (id)tableRowRepresentation;
- (id)description;
- (id)init;
- (id)initWithIndex:(unsigned long long)arg1 title:(id)arg2 artist:(id)arg3 album:(id)arg4 state:(unsigned long long)arg5;

@end

