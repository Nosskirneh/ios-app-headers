//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUBInitialViewModelRegistry : NSObject
{
    NSMutableDictionary *_initialViewModels;
}

@property(readonly, nonatomic) NSMutableDictionary *initialViewModels; // @synthesize initialViewModels=_initialViewModels;
- (void).cxx_destruct;
- (id)initialViewModelForViewURI:(id)arg1;
- (void)removeInitialViewModelForViewURI:(id)arg1;
- (void)registerInitialViewModel:(id)arg1 forViewURI:(id)arg2;
- (id)init;

@end

