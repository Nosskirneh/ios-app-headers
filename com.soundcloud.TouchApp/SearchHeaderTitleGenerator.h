//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter;

@interface SearchHeaderTitleGenerator : NSObject
{
    NSNumberFormatter *_formatter;
}

@property(readonly, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (id)headerTitleWithTracksCount:(int)arg1 playlistsCount:(int)arg2 usersCount:(int)arg3;
- (id)initWithNumberFormatter:(id)arg1;
- (id)init;

@end
