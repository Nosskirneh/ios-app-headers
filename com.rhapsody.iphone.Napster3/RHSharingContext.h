//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHMailActivityItem, _TtC7Napster23ShareActivityItemSource;

@interface RHSharingContext : NSObject
{
    _TtC7Napster23ShareActivityItemSource *_textSource;
    RHMailActivityItem *_mailSource;
}

@property(retain, nonatomic) RHMailActivityItem *mailSource; // @synthesize mailSource=_mailSource;
@property(retain, nonatomic) _TtC7Napster23ShareActivityItemSource *textSource; // @synthesize textSource=_textSource;
- (void).cxx_destruct;
- (id)initWithTextSource:(id)arg1 mailSource:(id)arg2;

@end

