//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPodcastRequestData.h"

@class NSArray, NSData, NSPredicate, NSSortDescriptor, NSString, NSURL;

@interface SPTCollectionPodcastEpisodesRequestData : NSObject <SPTPodcastRequestData>
{
    _Bool _grouped;
    NSString *_requestStringTemplate;
    NSPredicate *_filterPredicate;
    NSSortDescriptor *_sortDescriptor;
    NSURL *_viewURL;
    NSArray *_sortDescriptors;
    NSData *_requestBody;
}

@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
- (id)additionalFilterString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestAction;
- (id)initWithURL:(id)arg1 mediaType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

