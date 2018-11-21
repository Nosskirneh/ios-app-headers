//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCollectionLogger, SPTLinkDispatcher;

@interface SPTCollectionPodcastInfoViewProvider : NSObject
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTCollectionLogger> _collectionLogger;
}

@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)navigateToShowsHub;
- (void)setupEmptyCollectionInfoView:(id)arg1 title:(id)arg2 text:(id)arg3 icon:(long long)arg4 addBrowseButton:(_Bool)arg5;
- (id)infoViewForEmptyViewURI:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithLinkDispatcher:(id)arg1 collectionLogger:(id)arg2;

@end

