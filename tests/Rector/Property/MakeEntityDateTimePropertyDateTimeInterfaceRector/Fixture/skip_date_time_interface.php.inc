<?php

namespace Rector\Doctrine\Tests\Rector\Property\MakeEntityDateTimePropertyDateTimeInterfaceRector\Fixture;

use DateTimeInterface;
use Doctrine\ORM\Mapping as ORM;

/**
 * @ORM\Entity()
 */
class SkipDateTimeInterface
{
    /**
     * @var DateTimeInterface|null
     */
    private $bornAt;

    public function setBornAt(DateTimeInterface $bornAt)
    {
        $this->bornAt = $bornAt;
    }
}
