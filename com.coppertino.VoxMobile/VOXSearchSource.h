//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol VOXSearchSourceDelegate;

@interface VOXSearchSource : NSObject
{
    _Bool _busy;
    id <VOXSearchSourceDelegate> _delegate;
    unsigned long long _sourceType;
    NSArray *_localResultModels;
}

@property(nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(retain, nonatomic) NSArray *localResultModels; // @synthesize localResultModels=_localResultModels;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) __weak id <VOXSearchSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sourceReplenished:(id)arg1 sourceType:(unsigned long long)arg2;
- (void)sourceUpdatedWithType:(unsigned long long)arg1;
- (void)requestMoreSearchResults;
- (void)cancelSearching;
- (void)searchWithTerm:(id)arg1;
- (id)searchResults;
- (id)init;

@end
