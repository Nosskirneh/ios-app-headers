//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ContentSourceDelegate;

@interface _TtC10SoundCloud25MyCollectionArtistsSource : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: sectionInfo
    // Error parsing type: , name: count
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)loadContent;
-     // Error parsing type: (null), name: objectAtIndexedSubscript:
@property(nonatomic) unsigned long long count; // @synthesize count;
@property(nonatomic, copy) id sectionInfo; // @synthesize sectionInfo;
@property(nonatomic, retain) id <ContentSourceDelegate> delegate; // @synthesize delegate;

@end
