//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGConfigLoader.h"

@class NSArray;

@interface ANGOfflineMessagesConfig : ANGConfigLoader
{
    NSArray *_pushesArray;
}

@property(readonly) NSArray *pushesArray; // @synthesize pushesArray=_pushesArray;
- (void).cxx_destruct;
- (_Bool)internalProcessData:(id)arg1;
- (id)additionalParams;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

@end
