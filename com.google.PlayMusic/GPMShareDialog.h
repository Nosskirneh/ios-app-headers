//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MusicItem;
@protocol GPMShareableItem;

@interface GPMShareDialog : NSObject
{
    MusicItem<GPMShareableItem> *_item;
}

- (void).cxx_destruct;
- (void)presentWithSender:(id)arg1;
- (id)initWithItem:(id)arg1;

@end
