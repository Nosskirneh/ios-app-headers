//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSubject.h"

@protocol NSCopying;

@interface RACGroupedSignal : RACSubject
{
    id <NSCopying> _key;
}

+ (id)signalWithKey:(id)arg1;
@property(copy, nonatomic) id <NSCopying> key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
