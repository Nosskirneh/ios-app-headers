//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMCardDataSource-Protocol.h"

@class MusicItem, NSIndexPath, NSString;
@protocol GPMCardAvailabilityDelegate, GPMCardContextMenuDataSource, GPMCardImageProvider, GPMCardPinnableContainerProvider;

@interface GPMCardViewModel : NSObject <GPMCardDataSource>
{
    _Bool selectionEnabled;
    NSString *title;
    NSString *subtitle;
    NSString *accessibilityLabel;
    NSString *menuAccessibilityLabel;
    id <GPMCardPinnableContainerProvider> pinnableContainerProvider;
    id <GPMCardAvailabilityDelegate> availabilityDelegate;
    id <GPMCardContextMenuDataSource> contextMenuDataSource;
    id <GPMCardImageProvider> imageProvider;
    NSIndexPath *indexPath;
    Class _cardClass;
    MusicItem *_item;
    NSString *_imageURL;
}

@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) MusicItem *item; // @synthesize item=_item;
@property(retain, nonatomic) Class cardClass; // @synthesize cardClass=_cardClass;
@property(nonatomic, getter=isSelectionEnabled) _Bool selectionEnabled; // @synthesize selectionEnabled;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath;
@property(nonatomic) __weak id <GPMCardImageProvider> imageProvider; // @synthesize imageProvider;
@property(nonatomic) __weak id <GPMCardContextMenuDataSource> contextMenuDataSource; // @synthesize contextMenuDataSource;
@property(nonatomic) __weak id <GPMCardAvailabilityDelegate> availabilityDelegate; // @synthesize availabilityDelegate;
@property(nonatomic) __weak id <GPMCardPinnableContainerProvider> pinnableContainerProvider; // @synthesize pinnableContainerProvider;
@property(copy, nonatomic) NSString *menuAccessibilityLabel; // @synthesize menuAccessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
