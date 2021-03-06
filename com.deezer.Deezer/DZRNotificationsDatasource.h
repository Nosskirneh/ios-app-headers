//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDataSourceAbstract.h"

@class DZRDataProvider, DZRNotification, DZRNotificationDataComputer, NSArray;

@interface DZRNotificationsDatasource : DZRDataSourceAbstract
{
    _Bool _fullyLoaded;
    _Bool _loading;
    DZRDataProvider *_dataProvider;
    DZRNotificationDataComputer *_sectionMaker;
    NSArray *_notifications;
    NSArray *_sectionNames;
    DZRNotification *_pinnedNotification;
}

@property(nonatomic) __weak DZRNotification *pinnedNotification; // @synthesize pinnedNotification=_pinnedNotification;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *sectionNames; // @synthesize sectionNames=_sectionNames;
@property(retain, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) DZRNotificationDataComputer *sectionMaker; // @synthesize sectionMaker=_sectionMaker;
@property(readonly, nonatomic) DZRDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic, getter=isFullyLoaded) _Bool fullyLoaded; // @synthesize fullyLoaded=_fullyLoaded;
- (void).cxx_destruct;
- (void)updateData:(id)arg1;
- (void)updateData:(id)arg1 replace:(_Bool)arg2 serverTotal:(unsigned long long)arg3;
- (void)markAsReadFromNotificationId:(id)arg1;
- (void)removeNotificationWithId:(id)arg1;
- (void)getNotificationsFromNotification:(id)arg1;
- (long long)firstUnpinnedNotificationsSection;
- (id)oldestNotification;
- (id)mostRecentNotification;
- (id)notificationAtIndexPath:(id)arg1;
- (id)attachmentsAtIndexPath:(id)arg1;
- (id)unsortedNotifications;
- (id)firstAttachmentOfClass:(Class)arg1 atIndexPath:(id)arg2;
- (id)titleForHeaderAtSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)refreshData;
- (_Bool)hasData;
- (_Bool)isLoading;
- (id)idAtIndexPath:(id)arg1;
- (id)themeAtIndexPath:(id)arg1;
- (id)actionsAtIndexPath:(id)arg1;
- (id)urlAtIndexPath:(id)arg1;
- (id)quotationAtIndexPath:(id)arg1;
- (id)contentAtIndexPath:(id)arg1;
- (id)dateAtIndexPath:(id)arg1;
- (id)subtitleAtIndexPath:(id)arg1;
- (id)titleAtIndexPath:(id)arg1;
- (id)senderAtIndexPath:(id)arg1;
- (void)dismissNotificationAtIndexPath:(id)arg1;
- (_Bool)isPinnedAtIndexPath:(id)arg1;
- (void)markAllAsRead;
- (_Bool)isReadAtIndexPath:(id)arg1;
- (void)loadMore;
- (id)initWithDelegate:(id)arg1;

@end

