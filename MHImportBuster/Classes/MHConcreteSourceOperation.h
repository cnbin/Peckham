//
//  MHConcreteSourceOperation.h
//  MHImportBuster
//
//  Created by Marko Hlebar on 09/02/2014.
//  Copyright (c) 2014 Marko Hlebar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MHSourceOperation.h"

@interface MHConcreteSourceOperation : NSOperation <MHSourceOperation>
@property (nonatomic, readonly) NSTextStorage *source;
@end
