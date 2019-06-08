//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDImageData, NSString;

@interface IDAudioPlayerPlaylistItem : NSObject
{
    _Bool _activityIndicator;
    NSString *_title;
    NSString *_artist;
    IDImageData *_icon;
    long long _iconId;
    long long _firstAccessoryIconId;
    long long _secondAccessoryIconId;
}

+ (id)new;
@property(readonly, nonatomic) _Bool activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) long long secondAccessoryIconId; // @synthesize secondAccessoryIconId=_secondAccessoryIconId;
@property(readonly, nonatomic) long long firstAccessoryIconId; // @synthesize firstAccessoryIconId=_firstAccessoryIconId;
@property(readonly, nonatomic) long long iconId; // @synthesize iconId=_iconId;
@property(readonly, nonatomic) IDImageData *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)tableRowRepresentation;
- (id)init;
- (id)initWithTitle:(id)arg1 artist:(id)arg2 icon:(id)arg3 iconId:(long long)arg4 firstAccessoryIconId:(long long)arg5 secondAccessoryIconId:(long long)arg6 activityIndicator:(_Bool)arg7;
- (id)initWithTitle:(id)arg1 artist:(id)arg2 iconId:(long long)arg3 firstAccessoryIconId:(long long)arg4 secondAccessoryIconId:(long long)arg5 activityIndicator:(_Bool)arg6;
- (id)initWithTitle:(id)arg1 artist:(id)arg2 icon:(id)arg3 firstAccessoryIconId:(long long)arg4 secondAccessoryIconId:(long long)arg5 activityIndicator:(_Bool)arg6;

@end

