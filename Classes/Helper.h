//
//  Helper.h
//  TrickTheDonkey
//
//  Created by Uffe Koch on 30/01/10.
//  Copyright 2010 Huge Lawn Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>


@interface Helper : NSObject {

}

+ (AVAudioPlayer *)prepAudio:(NSString *)audioFileName;

@end
